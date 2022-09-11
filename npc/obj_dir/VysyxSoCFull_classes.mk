# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VysyxSoCFull.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing threaded output mode?  0/1/N threads (from --trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VysyxSoCFull \
	VysyxSoCFull___024root \
	VysyxSoCFull___024root__1 \
	VysyxSoCFull___024root__2 \
	VysyxSoCFull___024root__3 \
	VysyxSoCFull___024root__4 \
	VysyxSoCFull___024root__5 \
	VysyxSoCFull___024root__6 \
	VysyxSoCFull___024root__7 \
	VysyxSoCFull___024root__8 \
	VysyxSoCFull___024root__9 \
	VysyxSoCFull___024root__10 \
	VysyxSoCFull___024root__11 \
	VysyxSoCFull___024root__12 \
	VysyxSoCFull___024root__13 \
	VysyxSoCFull___024root__14 \
	VysyxSoCFull___024root__15 \
	VysyxSoCFull___024root__16 \
	VysyxSoCFull___024unit \
	VysyxSoCFull_TLXbar_1 \
	VysyxSoCFull_TLError \
	VysyxSoCFull_TLFIFOFixer \
	VysyxSoCFull_TLWidthWidget \
	VysyxSoCFull_AXI4UserYanker_1 \
	VysyxSoCFull_TLToAXI4 \
	VysyxSoCFull_TLToAXI4__1 \
	VysyxSoCFull_Queue_38 \
	VysyxSoCFull_TLBusBypass \
	VysyxSoCFull_TLBusBypass__1 \
	VysyxSoCFull_TLMonitor_7 \
	VysyxSoCFull_RX \
	VysyxSoCFull_AsyncQueueSink \
	VysyxSoCFull_TX \
	VysyxSoCFull_AsyncQueueSource \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VysyxSoCFull__ConstPool_0 \
	VysyxSoCFull___024root__Slow \
	VysyxSoCFull___024root__1__Slow \
	VysyxSoCFull___024root__2__Slow \
	VysyxSoCFull___024root__3__Slow \
	VysyxSoCFull___024root__4__Slow \
	VysyxSoCFull___024unit__Slow \
	VysyxSoCFull_TLXbar_1__Slow \
	VysyxSoCFull_TLError__Slow \
	VysyxSoCFull_TLFIFOFixer__Slow \
	VysyxSoCFull_TLWidthWidget__Slow \
	VysyxSoCFull_AXI4UserYanker_1__Slow \
	VysyxSoCFull_TLToAXI4__Slow \
	VysyxSoCFull_Queue_38__Slow \
	VysyxSoCFull_TLBusBypass__Slow \
	VysyxSoCFull_TLMonitor_7__Slow \
	VysyxSoCFull_RX__Slow \
	VysyxSoCFull_AsyncQueueSink__Slow \
	VysyxSoCFull_TX__Slow \
	VysyxSoCFull_AsyncQueueSource__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VysyxSoCFull__Dpi \
	VysyxSoCFull__Trace \
	VysyxSoCFull__Trace__1 \
	VysyxSoCFull__Trace__2 \
	VysyxSoCFull__Trace__3 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VysyxSoCFull__Syms \
	VysyxSoCFull__Trace__Slow \
	VysyxSoCFull__Trace__1__Slow \
	VysyxSoCFull__Trace__2__Slow \
	VysyxSoCFull__Trace__3__Slow \
	VysyxSoCFull__Trace__4__Slow \
	VysyxSoCFull__Trace__5__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
