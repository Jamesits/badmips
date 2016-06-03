
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name exp8-r-instruction -dir "/home/james/code/FPGA-mips/exp8-r-instruction/planAhead_run_1" -part xc6slx16csg324-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "/home/james/code/FPGA-mips/exp8-r-instruction/experiment.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {/home/james/code/FPGA-mips/exp8-r-instruction} {ipcore_dir} }
add_files [list {ipcore_dir/inst_mem.ncf}] -fileset [get_property constrset [current_run]]
set_param project.pinAheadLayout  yes
set_property target_constrs_file "cpu_board.ucf" [current_fileset -constrset]
add_files [list {cpu_board.ucf}] -fileset [get_property constrset [current_run]]
link_design
