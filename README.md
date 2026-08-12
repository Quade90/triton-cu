# triton::cu — Project Member Application

Jason Paul Manuel (EP25B015) — application submission for the triton::cu project (KLA × AI Club, CFI, IIT Madras).

## Contents

| File | Section | What it is |
|---|---|---|
| `Section_2_1.ipynb` | 2.1 Twelve Parsecs | `sum_rows` Triton kernel: baseline power-of-2 test, the `n=1000` failure, the mask fix, and the two timing harnesses (`time_it_A` vs `time_it_B`) used to debunk the 200× claim |
| `Section_2_5_construction.ipynb` | 2.5 Translation Agents & Benchmarking | Full build-up of the Python→C++17 translation agent (Qwen2.5-Coder-3B-Instruct): model load, prompt, `extract_cpp`, `compile_and_run`, `make_fix_prompt`, retry loop |
| `Section_2_5_working.ipynb` | 2.5 | Same pipeline stripped to the final working version, no scratch/debug cells |
| `deviceBuffer.cpp` | 2.4 RAII / Move Semantics | `DeviceBuffer`: RAII wrapper around a `cudaMalloc`'d `float*`, copy disabled, move constructor/assignment implemented |
| `triton_cu.pdf` | — | Full written questionnaire responses (sections 1 and 2) |

## Answered

- Section 1 — General Questionnaire
- Section 2.1 — Twelve Parsecs (CPU vs GPU, Triton internals, `sum_rows` bug hunt, timing harness critique)
- Section 2.2 — The Protocol Droid (agentic self-review isn't verification, differential testing)
- Section 2.3 — Foundations of Memory Management (pointers, references, stack/heap, RAII, destructors)
- Section 2.4 — Host/Device Boundary & GPU Systems (chosen over 2.5's part 1; `DeviceBuffer` RAII + move semantics + stream safety)
- Section 2.5, parts 2 & 3 — Benchmarking harness design and metric-hacking safeguards (answered in the PDF; part 1, the agent build, is in the notebooks above since it was built regardless of the "pick one" instruction)

## Running the notebooks

`Section_2_1.ipynb` needs a CUDA GPU + Triton (`pip install triton torch`).

`Section_2_5_*.ipynb` need a GPU with enough VRAM for a 3B model, plus `transformers`, `accelerate`, and `g++` on PATH for the compile step.

## Links

References, LLM chat logs, and the AI Guild GitHub repo are listed in `triton_cu.pdf` §3.
