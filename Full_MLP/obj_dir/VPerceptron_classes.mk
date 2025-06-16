# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VPerceptron.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VPerceptron_vm_classes_0 \
	VPerceptron_vm_classes_1 \
	VPerceptron_vm_classes_2 \
	VPerceptron_vm_classes_3 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VPerceptron___024root__Slow \
	VPerceptron___024root__DepSet_h25a9a063__0__Slow \
	VPerceptron___024root__DepSet_h25a9a063__1__Slow \
	VPerceptron___024root__DepSet_h25a9a063__2__Slow \
	VPerceptron___024root__DepSet_h25a9a063__3__Slow \
	VPerceptron___024root__DepSet_hb132d072__0__Slow \
	VPerceptron___024unit__Slow \
	VPerceptron___024unit__DepSet_ha86c78a2__0__Slow \
	VPerceptron_FixedPoint__Slow \
	VPerceptron_FixedPoint__DepSet_h9c470a15__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VPerceptron__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VPerceptron__Syms \
	VPerceptron__Trace__0__Slow \
	VPerceptron__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
