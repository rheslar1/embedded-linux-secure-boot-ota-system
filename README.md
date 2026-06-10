# Secure Boot and OTA Update System

Embedded Linux fleet-lifecycle project using U-Boot verified boot, signed FIT images, A/B partitions, and RAUC or Mender rollback-safe updates.

## Portfolio Purpose

This repository is an Embedded Systems project scaffold for the Rheslar portfolio. It is designed to become a hardware-backed project with build output, validation logs, and reviewable implementation evidence.

## Stack

- U-Boot
- Verified boot
- FIT images
- RAUC/Mender
- A/B partition
- OTA rollback

## Quick Start

```bash
cmake -S . -B build
cmake --build build
./build/embedded_linux_secure_boot_ota_system
python -m unittest discover -s tests
```

## Implementation Slices

- Native starter executable that exposes the project identity, stack, and validation target.
- Architecture document with control boundaries, data flow, safety assumptions, and evidence plan.
- Unit smoke test that keeps source, docs, and CI files present as the repo grows.
- GitHub Actions workflow for configure, build, executable smoke run, and repository validation.

## Evidence Target

Device lifecycle security, signed kernel execution, fail-safe OTA updates, and recoverable embedded Linux fleet deployment.

## Remote

Intended public repository: https://github.com/rheslar1/embedded-linux-secure-boot-ota-system
