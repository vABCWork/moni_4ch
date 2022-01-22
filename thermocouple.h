
void tc_temp_cal();
void temp_cold_junction();

float tc_thermal_motiveforce(int32_t ad_avg);
float thermal_motiveforce_to_temp(float emf);
float temp_to_thermal_motiveforce(float temp);

uint16_t search_table (const float *p_data_table, uint16_t table_size, float data);

float liner_interpolate (float x0, float y0, float x1, float y1, float x);

extern float cj_temp;
extern float tc_temp[4];