#include <array>
#include <cassert>
#include <string_view>

class IReadinessRule {
 public:
  virtual ~IReadinessRule() = default;
  virtual bool passes(std::string_view evidenceTarget) const = 0;
};

class RequiredEvidenceRule final : public IReadinessRule {
 public:
  bool passes(std::string_view evidenceTarget) const override {
    return !evidenceTarget.empty();
  }
};

struct ProjectProfile {
  std::string_view title;
  std::string_view summary;
  std::string_view evidenceTarget;
  std::array<std::string_view, 9> tags;
};

constexpr ProjectProfile profile{
  "Secure Boot and OTA Update System",
  "Embedded Linux fleet-lifecycle project using U-Boot verified boot, signed FIT images, A/B partitions, and RAUC or Mender rollback-safe updates.",
  "Device lifecycle security, signed kernel execution, fail-safe OTA updates, and recoverable embedded Linux fleet deployment.",
  {
    "C++17",
    "C++ Design Patterns",
    "SOLID",
    "U-Boot",
    "Verified boot",
    "FIT images",
    "RAUC/Mender",
    "A/B partition",
    "OTA rollback"
  }
};

int main() {
  const RequiredEvidenceRule rule;
  assert(!profile.title.empty());
  assert(!profile.summary.empty());
  assert(rule.passes(profile.evidenceTarget));
  assert(profile.tags[0] == "C++17");
  return 0;
}
