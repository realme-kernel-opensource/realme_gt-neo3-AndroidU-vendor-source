/*  SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2019 MediaTek Inc.
 */
MET_SSPM_RTS_EVNET(SSPM_PTPOD, "_id,voltage")
MET_SSPM_RTS_EVNET(SSPM_MET_UNIT_TEST, "test")
MET_SSPM_RTS_EVNET(SSPM_QOS_BOUND_STATE, "idx,state,num,event,emibw_mon_total,emibw_mon_cpu,emibw_mon_gpu,emibw_mon_mm,emibw_mon_md,emibw_req_total,emibw_req_cpu,emibw_req_gpu,emibw_req_mm,emibw_req_md,smibw_mon_venc,smibw_mon_cam,smibw_mon_img,smibw_mon_mdp,smibw_mon_gpu,smibw_mon_apu,smibw_req_venc,smibw_req_cam,smibw_req_img,smibw_req_mdp,smibw_req_gpu,smibw_req_apu,lat_mon_cpu")
MET_SSPM_RTS_EVNET(SSPM_CM_MGR_NON_WFX, "non_wfx_0,non_wfx_1,non_wfx_2,non_wfx_3,non_wfx_4,non_wfx_5,non_wfx_6,non_wfx_7")
MET_SSPM_RTS_EVNET(SSPM_CM_MGR_LOADING, "ratio,cps")
MET_SSPM_RTS_EVNET(SSPM_CM_MGR_POWER, "c_up_array_0,c_up_array_1,c_down_array_0,c_down_array_1,c_up_0,c_up_1,c_down_0,c_dwon_1,c_up,c_down,v_up,v_down,v2f_0,v2f_1")
MET_SSPM_RTS_EVNET(SSPM_CM_MGR_OPP, "v_dram_opp,v_dram_opp_cur,c_opp_cur_0,c_opp_cur_1,d_times_up,d_times_down")
MET_SSPM_RTS_EVNET(SSPM_CM_MGR_RATIO, "ratio_max_0,ratio_max_1,ratio_0,ratio_1,ratio_2,ratio_3,ratio_4,ratio_5,ratio_6,ratio_7")
MET_SSPM_RTS_EVNET(SSPM_CM_MGR_BW, "total_bw")
MET_SSPM_RTS_EVNET(SSPM_CM_MGR_CP_RATIO, "up0,up1,up2,up3,down0,down1,down2,down3")
MET_SSPM_RTS_EVNET(SSPM_CM_MGR_VP_RATIO, "up0,up1,up2,up3,down0,down1,down2,down3")
MET_SSPM_RTS_EVNET(SSPM_CM_MGR_DE_TIMES, "up0,up1,up2,up3,down0,down1,down2,down3,reset")
MET_SSPM_RTS_EVNET(SSPM_SWPM_CPU__CORE_ACTIVE_RATIO, "cpu0,cpu1,cpu2,cpu3,cpu4,cpu5,cpu6,cpu7")
MET_SSPM_RTS_EVNET(SSPM_SWPM_CPU__CORE_IDLE_RATIO, "cpu0,cpu1,cpu2,cpu3,cpu4,cpu5,cpu6,cpu7")
MET_SSPM_RTS_EVNET(SSPM_SWPM_CPU__CORE_OFF_RATIO, "cpu0,cpu1,cpu2,cpu3,cpu4,cpu5,cpu6,cpu7")
MET_SSPM_RTS_EVNET(SSPM_SWPM_CPU__CORE_STALL_RATIO, "cpu0,cpu1,cpu2,cpu3,cpu4,cpu5,cpu6,cpu7")
MET_SSPM_RTS_EVNET(SSPM_SWPM_CPU__CORE_PMU_L3DC, "cpu0,cpu1,cpu2,cpu3,cpu4,cpu5,cpu6,cpu7")
MET_SSPM_RTS_EVNET(SSPM_SWPM_CPU__CORE_PMU_INST_SPEC, "cpu0,cpu1,cpu2,cpu3,cpu4,cpu5,cpu6,cpu7")
MET_SSPM_RTS_EVNET(SSPM_SWPM_CPU__CORE_PMU_CYCLES, "cpu0,cpu1,cpu2,cpu3,cpu4,cpu5,cpu6,cpu7")
MET_SSPM_RTS_EVNET(SSPM_SWPM_CPU__CORE_NON_WFX_CTR, "cpu0,cpu1,cpu2,cpu3,cpu4,cpu5,cpu6,cpu7")
MET_SSPM_RTS_EVNET(SSPM_SWPM_CPU__DSU_STATE_RATIO, "active,idle,off")
MET_SSPM_RTS_EVNET(SSPM_SWPM_CPU__DSU_L3_BW, "L3_BW")
MET_SSPM_RTS_EVNET(SSPM_SWPM_CPU__MCUSYS_STATE_RATIO, "active,idle,off")
MET_SSPM_RTS_EVNET(SSPM_SWPM_CPU__MCUSYS_EMI_BW, "cpu_emi_bw")
MET_SSPM_RTS_EVNET(SSPM_SWPM_CPU__DVFS, "vproc2,vproc1,cpuL_freq,cpuB_freq,cpu_L_opp,cpu_B_opp,cci_volt,cci_freq,cci_opp")
MET_SSPM_RTS_EVNET(SSPM_SWPM_CPU__LKG_POWER, "cpu_L,cpu_B,dsu")
MET_SSPM_RTS_EVNET(SSPM_SWPM_CPU__POWER, "cpu_L,cpu_B,dsu,mcusys")
MET_SSPM_RTS_EVNET(SSPM_SWPM_GPU__LOADING, "loading")
MET_SSPM_RTS_EVNET(SSPM_SWPM_GPU__DVFS, "vgpu,gpu_freq")
MET_SSPM_RTS_EVNET(SSPM_SWPM_GPU__URATE, "alu,tex,lsc,l2c,vary,tiler")
MET_SSPM_RTS_EVNET(SSPM_SWPM_GPU__POWER, "gpu")
MET_SSPM_RTS_EVNET(SSPM_SWPM_CORE__MDP_STATE_RATIO, "active,off")
MET_SSPM_RTS_EVNET(SSPM_SWPM_CORE__DISP_STATE_RATIO, "active,off")
MET_SSPM_RTS_EVNET(SSPM_SWPM_CORE__ADSP_STATE_RATIO, "active,off")
MET_SSPM_RTS_EVNET(SSPM_SWPM_CORE__VENC_STATE_RATIO, "active,idle,off")
MET_SSPM_RTS_EVNET(SSPM_SWPM_CORE__VDEC_STATE_RATIO, "active,idle,off")
MET_SSPM_RTS_EVNET(SSPM_SWPM_CORE__INFRA_STATE_RATIO, "dact,cact,idle,dcm")
MET_SSPM_RTS_EVNET(SSPM_SWPM_CORE__VDO_CODING_TYPE, "venc,vdec")
MET_SSPM_RTS_EVNET(SSPM_SWPM_CORE__DVFS, "vcore,venc_freq,vdec_freq")
MET_SSPM_RTS_EVNET(SSPM_SWPM_CORE__POWER, "mdp,disp,adsp,venc,vdec,dramc,infra_top,aphy_vcore")
MET_SSPM_RTS_EVNET(SSPM_SWPM_DRAM__MEM_IDX, "read_bw,write_bw,srr_pct,pdir_pct,phr_pct,acc_util,mr4")
MET_SSPM_RTS_EVNET(SSPM_SWPM_DRAM__DVFS, "ddr_freq")
MET_SSPM_RTS_EVNET(SSPM_SWPM_DRAM__POWER, "aphy_vddq_0p6v,aphy_vm_0p75v,aphy_vio_1p2v,aphy_vio_1p8v,dram_vddq_0p6v,dram_vdd2_1p1v,dram_vdd1_1p8v")
MET_SSPM_RTS_EVNET(SSPM_SWPM_VPU__VPU0_STATE_RATIO, "active,idle,off")
MET_SSPM_RTS_EVNET(SSPM_SWPM_VPU__VPU1_STATE_RATIO, "active,idle,off")
MET_SSPM_RTS_EVNET(SSPM_SWPM_VPU__DVFS, "vvpu,vpu0_freq,vpu1_freq")
MET_SSPM_RTS_EVNET(SSPM_SWPM_VPU__POWER, "vpu")
MET_SSPM_RTS_EVNET(__SSPM_APUSYS_QOS_CNT__, "bw_VPU0,bw_VPU1,bw_MDLA0,bw_MDAL1,lt_VPU0,lt_VPU1,lt_MDLA0,lt_MDLA1")
MET_SSPM_RTS_EVNET(__SSPM_GPU_APU_SSC_CNT__, "GPU_0_R,GPU_0_W,APU_0_R,APU_0_W,GPU_1_R,GPU_1_W,APU_1_R,APU_1_W")
