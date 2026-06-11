# Secure Boot and OTA Update System Design Package

## Purpose

Embedded Linux fleet-lifecycle project using U-Boot verified boot, signed FIT images, A/B partitions, and RAUC or Mender rollback-safe updates.

This package defines the project as an implementation-ready embedded system. It covers system architecture, requirements, interface boundaries, runtime design, validation evidence, and phased delivery.

## Project Profile

| Field | Value |
| --- | --- |
| Repository | `rheslar1/embedded-linux-secure-boot-ota-system` |
| Primary stack | C++17, C++ Design Patterns, SOLID, U-Boot, Verified boot, FIT images, RAUC/Mender, A/B partition, OTA rollback |
| Review proof point | Device lifecycle security, signed kernel execution, fail-safe OTA updates, and recoverable embedded Linux fleet deployment. |

## Artifacts

- [System Design](system-design.md)
- [Requirements](requirements.md)
- [Interface Control](interface-control.md)
- [Runtime Design](runtime-design.md)
- [Validation Plan](validation-plan.md)
- [Implementation Roadmap](implementation-roadmap.md)
- [Draw.io UML](diagrams/system-design.drawio)
- [PNG UML](diagrams/system-design.png)
