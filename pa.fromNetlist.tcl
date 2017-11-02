
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name digital -dir "C:/Users/Isabel/Desktop/Isabel/uni/tercero/CELT/digital/planAhead_run_3" -part xc3s100evq100-5
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/Isabel/Desktop/Isabel/uni/tercero/CELT/digital/registro.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/Isabel/Desktop/Isabel/uni/tercero/CELT/digital} }
set_property target_constrs_file "gen_reloj.ucf" [current_fileset -constrset]
add_files [list {gen_reloj.ucf}] -fileset [get_property constrset [current_run]]
link_design
