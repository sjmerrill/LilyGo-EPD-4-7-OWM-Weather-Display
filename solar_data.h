#ifndef SOLAR_DATA_H_
#define SOLAR_DATA_H_

#include <Arduino.h>

typedef struct { // For current Day and Day 1, 2, 3, etc
  int    SystemID;          // The Enlighten ID of the system.
  int    Modules;           // Number of active (not retired) modules. For historical requests, returns 0.
  int    SizeW;             // The size of the system, measured in Watts. For historical requests, returns 0.
  int    CurrentPower;      // Current power production, in Watts. For historical requests, returns 0.
  int    EnergyToday;       // Energy produced on the requested day, in Watt hours.
  int    EnergyLifetime;    // Energy produced in the lifetime of the system, excluding the requested day, in Watt hours.
  String SummaryDate;       // Effective date of the response.
  String Source;            // Indicates whether the production of this system is measured by its microinverters (microinverters) or by revenue-grade meters (meter) installed on the system.
  String Status;            // The current status of the system, even for historical requests.
  String OperationalAt;     // The time at which this system became operational. Corresponds to the system’s interconnect time, if one is specified. Otherwise, it is the system’s first interval end time.
  String LastReportAt;      // The last time an Envoy on this system reported.
  String LastIntervalEndAt; // The last known time that the system produced energy. When a system has not been communicating for a length of time, the last_report_at can be recent, whereas the last_interval_end_at may be further back.
} Solar_summary_record_type;

#endif /* ifndef SOLAR_DATA_H_ */
