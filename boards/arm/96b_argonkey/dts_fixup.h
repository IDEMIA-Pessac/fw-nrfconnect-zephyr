/*
 * Copyright (c) 2018 STMicroelectronics
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * This file is a temporary workaround for mapping of the generated information
 * to the current driver definitions.  This will be removed when the drivers
 * are modified to handle the generated information, or the mapping of
 * generated data matches the driver definitions.
 */

#define DT_HTS221_NAME			DT_ST_STM32_I2C_V1_40005800_ST_HTS221_5F_LABEL
#define DT_HTS221_I2C_MASTER_DEV_NAME	DT_ST_STM32_I2C_V1_40005800_ST_HTS221_5F_BUS_NAME

#define DT_LPS22HB_DEV_NAME			DT_ST_STM32_I2C_V1_40005800_ST_LPS22HB_PRESS_5D_LABEL
#define DT_LPS22HB_I2C_ADDR			DT_ST_STM32_I2C_V1_40005800_ST_LPS22HB_PRESS_5D_BASE_ADDRESS
#define DT_LPS22HB_I2C_MASTER_DEV_NAME	DT_ST_STM32_I2C_V1_40005800_ST_LPS22HB_PRESS_5D_BUS_NAME

#define DT_VL53L0X_NAME			DT_ST_STM32_I2C_V1_40005800_ST_VL53L0X_29_LABEL
#define DT_VL53L0X_I2C_ADDR			DT_ST_STM32_I2C_V1_40005800_ST_VL53L0X_29_BASE_ADDRESS
#define DT_VL53L0X_I2C_MASTER_DEV_NAME	DT_ST_STM32_I2C_V1_40005800_ST_VL53L0X_29_BUS_NAME

#define DT_LSM6DSL_DEV_NAME			DT_ST_STM32_SPI_40003800_ST_LSM6DSL_SPI_1_LABEL
#define DT_LSM6DSL_SPI_SELECT_SLAVE		DT_ST_STM32_SPI_40003800_ST_LSM6DSL_SPI_1_BASE_ADDRESS
#define DT_LSM6DSL_SPI_MASTER_DEV_NAME	DT_ST_STM32_SPI_40003800_ST_LSM6DSL_SPI_1_BUS_NAME
#define DT_LSM6DSL_SPI_BUS_FREQ		DT_ST_STM32_SPI_40003800_ST_LSM6DSL_SPI_1_SPI_MAX_FREQUENCY
#define DT_LSM6DSL_GPIO_DEV_NAME		DT_ST_STM32_SPI_40003800_ST_LSM6DSL_SPI_1_IRQ_GPIOS_CONTROLLER
#define DT_LSM6DSL_GPIO_PIN_NUM		DT_ST_STM32_SPI_40003800_ST_LSM6DSL_SPI_1_IRQ_GPIOS_PIN

#define CONFIG_LP3943_DEV_NAME			DT_ST_STM32_I2C_V1_40005C00_TI_LP3943_60_LABEL
#define CONFIG_LP3943_I2C_ADDRESS		DT_ST_STM32_I2C_V1_40005C00_TI_LP3943_60_BASE_ADDRESS
#define CONFIG_LP3943_I2C_MASTER_DEV_NAME	DT_ST_STM32_I2C_V1_40005C00_TI_LP3943_60_BUS_NAME