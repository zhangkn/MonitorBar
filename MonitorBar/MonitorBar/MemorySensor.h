//
//  MonitorBar
//  MemorySensor.h
//
//  Created by wing on 2017/1/1.
//  Copyright © 2016 Magic Install. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "Sensor.h"

/// 提供内存相关读数
@interface MemorySensor : NSTableCellView /* OC 不能多继承只能这样了... */ <Sensor>

+ (void)test;

@end