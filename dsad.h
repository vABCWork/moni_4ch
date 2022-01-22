
void Excep_DSAD0_ADI0(void);
void Excep_DSAD0_SCANEND0(void);


void Cal_ad_avg(void);
void Cal_ad1_avg(void);

void  dsad0_start(void);
void  dsad1_start(void);

void  dsad0_stop(void);
void  dsad1_stop(void);

void afe_ini(void);

void dsad0_ini(void);
void dsad1_ini(void);

extern volatile uint8_t ad_err;
extern volatile uint8_t ad_ovf;

extern volatile int32_t ad_ch0_data[10];
extern volatile int32_t ad_ch1_data[10];
extern volatile int32_t ad_ch2_data[10];
extern volatile int32_t ad_ch3_data[10];

extern volatile uint32_t dsad0_scan_over;
extern volatile uint16_t ad_index;

extern int32_t ad_ch_avg[4];

extern volatile int32_t ad_calib_ch0[100];
extern volatile int32_t ad_calib_ch1[100];
extern volatile int32_t ad_calib_ch2[100];
extern volatile int32_t ad_calib_ch3[100];

extern volatile uint8_t ad1_err;
extern volatile uint8_t ad1_ovf;

extern volatile int32_t  ad1_ch0_data[10];

extern volatile uint32_t dsad1_scan_over;

extern volatile uint32_t ad1_index;
extern int32_t ad1_ch_avg[1];	
