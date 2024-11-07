#include <stdint.h>

void reset_vector(void);
void blocking_handler(void);
void null_handler(void);

extern uint32_t _start_of_sram; // should be 0x20000000 + (128 * 1024)

void nmi_handler(void)  __attribute__((weak, alias ("null_handler")));
void hard_fault_handler(void) __attribute__((weak, alias("blocking_handler")));
void sv_call_handler(void) __attribute__((weak, alias ("null_handler")));
void pend_sv_handler(void) __attribute__((weak, alias ("null_handler")));
void sys_tick_handler(void) __attribute__((weak, alias ("null_handler")));
void mem_manage_handler(void) __attribute__((weak, alias ("blocking_handler")));
void bus_fault_handler(void) __attribute__((weak, alias("blocking_handler")));
void usage_fault_handler(void) __attribute__((weak, alias("blocking_handler")));
void debug_monitor_handler(void) __attribute__((weak, alias ("null_handler")));

void nvic_wwdg_isr(void) __attribute__((weak, alias("blocking_handler")));
void pvd_isr(void) __attribute__((weak, alias("blocking_handler")));
void tamp_stamp_isr(void) __attribute__((weak, alias("blocking_handler")));
void rtc_wkup_isr(void) __attribute__((weak, alias("blocking_handler")));
void flash_isr(void) __attribute__((weak, alias("blocking_handler")));
void rcc_isr(void) __attribute__((weak, alias("blocking_handler")));
void exti0_isr(void) __attribute__((weak, alias("blocking_handler")));
void exti1_isr(void) __attribute__((weak, alias("blocking_handler")));
void exti2_isr(void) __attribute__((weak, alias("blocking_handler")));
void exti3_isr(void) __attribute__((weak, alias("blocking_handler")));
void exti4_isr(void) __attribute__((weak, alias("blocking_handler")));
void dma1_stream0_isr(void) __attribute__((weak, alias("blocking_handler")));
void dma1_stream1_isr(void) __attribute__((weak, alias("blocking_handler")));
void dma1_stream2_isr(void) __attribute__((weak, alias("blocking_handler")));
void dma1_stream3_isr(void) __attribute__((weak, alias("blocking_handler")));
void dma1_stream4_isr(void) __attribute__((weak, alias("blocking_handler")));
void dma1_stream5_isr(void) __attribute__((weak, alias("blocking_handler")));
void dma1_stream6_isr(void) __attribute__((weak, alias("blocking_handler")));
void adc_isr(void) __attribute__((weak, alias("blocking_handler")));
void can1_tx_isr(void) __attribute__((weak, alias("blocking_handler")));
void can1_rx0_isr(void) __attribute__((weak, alias("blocking_handler")));
void can1_rx1_isr(void) __attribute__((weak, alias("blocking_handler")));
void can1_sce_isr(void) __attribute__((weak, alias("blocking_handler")));
void exti9_5_isr(void) __attribute__((weak, alias("blocking_handler")));
void tim1_brk_tim9_isr(void) __attribute__((weak, alias("blocking_handler")));
void tim1_up_tim10_isr(void) __attribute__((weak, alias("blocking_handler")));
void tim1_trg_com_tim11_isr(void) __attribute__((weak, alias("blocking_handler")));
void tim1_cc_isr(void) __attribute__((weak, alias("blocking_handler")));
void tim2_isr(void) __attribute__((weak, alias("blocking_handler")));
void tim3_isr(void) __attribute__((weak, alias("blocking_handler")));
void tim4_isr(void) __attribute__((weak, alias("blocking_handler")));
void i2c1_ev_isr(void) __attribute__((weak, alias("blocking_handler")));
void i2c1_er_isr(void) __attribute__((weak, alias("blocking_handler")));
void i2c2_ev_isr(void) __attribute__((weak, alias("blocking_handler")));
void i2c2_er_isr(void) __attribute__((weak, alias("blocking_handler")));
void spi1_isr(void) __attribute__((weak, alias("blocking_handler")));
void spi2_isr(void) __attribute__((weak, alias("blocking_handler")));
void usart1_isr(void) __attribute__((weak, alias("blocking_handler")));
void usart2_isr(void) __attribute__((weak, alias("blocking_handler")));
void usart3_isr(void) __attribute__((weak, alias("blocking_handler")));
void exti15_10_isr(void) __attribute__((weak, alias("blocking_handler")));
void rtc_alarm_isr(void) __attribute__((weak, alias("blocking_handler")));
void usb_fs_wkup_isr(void) __attribute__((weak, alias("blocking_handler")));
void tim8_brk_tim12_isr(void) __attribute__((weak, alias("blocking_handler")));
void tim8_up_tim13_isr(void) __attribute__((weak, alias("blocking_handler")));
void tim8_trg_com_tim14_isr(void) __attribute__((weak, alias("blocking_handler")));
void tim8_cc_isr(void) __attribute__((weak, alias("blocking_handler")));
void dma1_stream7_isr(void) __attribute__((weak, alias("blocking_handler")));
void fsmc_isr(void) __attribute__((weak, alias("blocking_handler")));
void sdio_isr(void) __attribute__((weak, alias("blocking_handler")));
void tim5_isr(void) __attribute__((weak, alias("blocking_handler")));
void spi3_isr(void) __attribute__((weak, alias("blocking_handler")));
void uart4_isr(void) __attribute__((weak, alias("blocking_handler")));
void uart5_isr(void) __attribute__((weak, alias("blocking_handler")));
void tim6_dac_isr(void) __attribute__((weak, alias("blocking_handler")));
void tim7_isr(void) __attribute__((weak, alias("blocking_handler")));
void dma2_stream0_isr(void) __attribute__((weak, alias("blocking_handler")));
void dma2_stream1_isr(void) __attribute__((weak, alias("blocking_handler")));
void dma2_stream2_isr(void) __attribute__((weak, alias("blocking_handler")));
void dma2_stream3_isr(void) __attribute__((weak, alias("blocking_handler")));
void dma2_stream4_isr(void) __attribute__((weak, alias("blocking_handler")));
void can2_tx_isr(void) __attribute__((weak, alias("blocking_handler")));
void can2_rx0_isr(void) __attribute__((weak, alias("blocking_handler")));
void can2_rx1_isr(void) __attribute__((weak, alias("blocking_handler")));
void can2_sce_isr(void) __attribute__((weak, alias("blocking_handler")));
void otg_fs_isr(void) __attribute__((weak, alias("blocking_handler")));
void dma2_stream5_isr(void) __attribute__((weak, alias("blocking_handler")));
void dma2_stream6_isr(void) __attribute__((weak, alias("blocking_handler")));
void dma2_stream7_isr(void) __attribute__((weak, alias("blocking_handler")));
void usart6_isr(void) __attribute__((weak, alias("blocking_handler")));
void i2c3_ev_isr(void) __attribute__((weak, alias("blocking_handler")));
void i2c3_er_isr(void) __attribute__((weak, alias("blocking_handler")));
void otg_hs_ep1_out_isr(void) __attribute__((weak, alias("blocking_handler")));
void otg_hs_ep1_in_isr(void) __attribute__((weak, alias("blocking_handler")));
void otg_hs_wkup_isr(void) __attribute__((weak, alias("blocking_handler")));
void otg_hs_isr(void) __attribute__((weak, alias("blocking_handler")));
void dcmi_isr(void) __attribute__((weak, alias("blocking_handler")));
void fpu_isr(void) __attribute__((weak, alias("blocking_handler")));
void spi4_isr(void) __attribute__((weak, alias("blocking_handler")));
void sai1_isr(void) __attribute__((weak, alias("blocking_handler")));
void sai2_isr(void) __attribute__((weak, alias("blocking_handler")));

void quadspi_isr(void) __attribute__((weak, alias("blocking_handler")));
void hdmi_cec_isr(void) __attribute__((weak, alias("blocking_handler")));
void spdif_rx_isr(void) __attribute__((weak, alias("blocking_handler")));
void fmp_i2c1_isr(void) __attribute__((weak, alias("blocking_handler")));
void fmp_i2c1_err_isr(void) __attribute__((weak, alias("blocking_handler")));

uint32_t vector_table[] __attribute__((section (".cs_vectors"))) = {
  (uint32_t)&_start_of_sram,
  (uint32_t)reset_vector,
  (uint32_t)nmi_handler,
  (uint32_t)hard_fault_handler,
  (uint32_t)mem_manage_handler,
  (uint32_t)bus_fault_handler,
  (uint32_t)usage_fault_handler,
  0, 0, 0, 0,
  (uint32_t)sv_call_handler,
  (uint32_t)debug_monitor_handler,
  0,
  (uint32_t)pend_sv_handler,
  (uint32_t)sys_tick_handler,
  (uint32_t) nvic_wwdg_isr,
  (uint32_t) pvd_isr,
  (uint32_t) tamp_stamp_isr,
  (uint32_t) rtc_wkup_isr,
  (uint32_t) flash_isr,
  (uint32_t) rcc_isr,
  (uint32_t) exti0_isr,
  (uint32_t) exti1_isr,
  (uint32_t) exti2_isr,
  (uint32_t) exti3_isr,
  (uint32_t) exti4_isr,
  (uint32_t) dma1_stream0_isr,
  (uint32_t) dma1_stream1_isr,
  (uint32_t) dma1_stream2_isr,
  (uint32_t) dma1_stream3_isr,
  (uint32_t) dma1_stream4_isr,
  (uint32_t) dma1_stream5_isr,
  (uint32_t) dma1_stream6_isr,
  (uint32_t) adc_isr,
  (uint32_t) can1_tx_isr,
  (uint32_t) can1_rx0_isr,
  (uint32_t) can1_rx1_isr,
  (uint32_t) can1_sce_isr,
  (uint32_t) exti9_5_isr,
  (uint32_t) tim1_brk_tim9_isr,
  (uint32_t) tim1_up_tim10_isr,
  (uint32_t) tim1_trg_com_tim11_isr,
  (uint32_t) tim1_cc_isr,
  (uint32_t) tim2_isr,
  (uint32_t) tim3_isr,
  (uint32_t) tim4_isr,
  (uint32_t) i2c1_ev_isr,
  (uint32_t) i2c1_er_isr,
  (uint32_t) i2c2_ev_isr,
  (uint32_t) i2c2_er_isr,
  (uint32_t) spi1_isr,
  (uint32_t) spi2_isr,
  (uint32_t) usart1_isr,
  (uint32_t) usart2_isr,
  (uint32_t) usart3_isr,
  (uint32_t) exti15_10_isr,
  (uint32_t) rtc_alarm_isr,
  (uint32_t) usb_fs_wkup_isr,
  (uint32_t) tim8_brk_tim12_isr,
  (uint32_t) tim8_up_tim13_isr,
  (uint32_t) tim8_trg_com_tim14_isr,
  (uint32_t) tim8_cc_isr,
  (uint32_t) dma1_stream7_isr,
  (uint32_t) fsmc_isr,
  (uint32_t) sdio_isr,
  (uint32_t) tim5_isr,
  (uint32_t) spi3_isr,
  (uint32_t) uart4_isr,
  (uint32_t) uart5_isr,
  (uint32_t) tim6_dac_isr,
  (uint32_t) tim7_isr,
  (uint32_t) dma2_stream0_isr,
  (uint32_t) dma2_stream1_isr,
  (uint32_t) dma2_stream2_isr,
  (uint32_t) dma2_stream3_isr,
  (uint32_t) dma2_stream4_isr,
  0,
  0,
  (uint32_t) can2_tx_isr,
  (uint32_t) can2_rx0_isr,
  (uint32_t) can2_rx1_isr,
  (uint32_t) can2_sce_isr,
  (uint32_t) otg_fs_isr,
  (uint32_t) dma2_stream5_isr,
  (uint32_t) dma2_stream6_isr,
  (uint32_t) dma2_stream7_isr,
  (uint32_t) usart6_isr,
  (uint32_t) i2c3_ev_isr,
  (uint32_t) i2c3_er_isr,
  (uint32_t) otg_hs_ep1_out_isr,
  (uint32_t) otg_hs_ep1_in_isr,
  (uint32_t) otg_hs_wkup_isr,
  (uint32_t) otg_hs_isr,
  (uint32_t) dcmi_isr,
  0,
  0,
  (uint32_t) fpu_isr,
  0,
  0,
  (uint32_t) spi4_isr,
  0,
  0,
  (uint32_t) sai1_isr,
  0,
  0,
  0,
  (uint32_t) sai2_isr,
  (uint32_t) quadspi_isr,
  (uint32_t) hdmi_cec_isr,
  (uint32_t) spdif_rx_isr,
  (uint32_t) fmp_i2c1_isr,
  (uint32_t) fmp_i2c1_err_isr
};

extern uint32_t _start_of_text;
extern uint32_t _end_of_text;
extern uint32_t _start_of_data;
extern uint32_t _end_of_data;
extern uint32_t _start_of_bss;
extern uint32_t _end_of_bss;

extern void	system_start(void);
void reset_vector(void)
{
  const uint32_t data_section_size = &_end_of_data - &_start_of_data;
  uint32_t* data_section_dst_on_sram_ptr = (uint32_t*)&_start_of_data;
  const uint32_t* where_to_start_copy_from_ptr = (uint32_t*)&_end_of_text;

  for (uint32_t i = 0; i < data_section_size; ++i) {
    data_section_dst_on_sram_ptr[i] = where_to_start_copy_from_ptr[i];
  }

  const uint32_t bss_size = &_end_of_bss - &_start_of_bss;
  uint32_t* bss_dst = (uint32_t*)&_start_of_bss;
  for (uint32_t i = 0; i < bss_size; ++i)
  {
    bss_dst[i] = 0;
  }

  system_start();
}

void blocking_handler(void)
{
 while(1);
}

void null_handler(void)
{

}
