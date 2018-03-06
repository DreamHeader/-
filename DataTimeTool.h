//
//  DataTimeTool.h
//  ZHGuidePagesView
//
//  Created by gubeidianzi on 2018/3/6.
//  Copyright © 2018年 yourcompany. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataTimeTool : NSObject
+(NSDateComponents *)getDateComponents:(NSDate *)date;

+(NSInteger)getWeek_AccordingToYear:(NSInteger)year;

+(NSString*)getWeekRangeDate_Year:(NSInteger)year WeakOfYear:(NSInteger)weekofYear;
+(NSDateComponents *)getCurrentDateComponents;
+(NSInteger)getCurrentWeek;
+(NSInteger)getCurrentYear;
+(NSInteger)getCurrentQuarter;
+(NSInteger)getCurrentMonth;
+(NSInteger)getCurrentDay;

+(NSDate *)dateFromString:(NSString *)dateString DateFormat:(NSString *)DateFormat;
+(NSString *)stringFromDate:(NSDate *)date DateFormat:(NSString *)DateFormat;

+(NSString *)dateByAddingTimeInterval:(NSTimeInterval)TimeInterval DataTime:(NSString *)dateStr DateFormat:(NSString *)DateFormat;
+(NSString *)getDataTime:(NSString *)dateStr DateFormat:(NSString *)DateFormat;
+(NSString *)getDataTime:(NSString *)dateStr DateFormat:(NSString *)DateFormat oldDateFormat:(NSString *)oldDateFormat;

+(int)getNumberOfCharactersInString:(NSString *)str c:(char)c;
+(NSString *)getFormat:(NSString *)dateString;

/**
 *  json日期转iOS时间
 *
 *  @param string /Date()
 *
 *  @return
 */
+(NSString *)interceptTimeStampFromStr:(NSString *)string DateFormat:(NSString *)DateFormat;


@end
