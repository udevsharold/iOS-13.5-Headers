/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSDate, NSNumber;

@interface SANotificationObject : SADomainObject

@property (nonatomic,copy) NSString * applicationId; 
@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSNumber * dateIsAllDay; 
@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) NSString * notificationId; 
@property (nonatomic,copy) NSNumber * previewRestricted; 
@property (nonatomic,copy) NSString * priority; 
@property (nonatomic,copy) NSDate * recencyDate; 
@property (nonatomic,copy) NSString * source; 
@property (nonatomic,copy) NSString * threadIdentifier; 
@property (nonatomic,copy) NSString * timeZoneId; 
@property (nonatomic,copy) NSString * type; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(NSDate *)date;
-(NSString *)source;
-(NSDate *)endDate;
-(id)groupIdentifier;
-(NSString *)priority;
-(void)setPriority:(NSString *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setThreadIdentifier:(NSString *)arg1 ;
-(NSString *)threadIdentifier;
-(id)encodedClassName;
-(NSNumber *)dateIsAllDay;
-(NSDate *)recencyDate;
-(NSNumber *)previewRestricted;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(NSString *)timeZoneId;
-(NSString *)applicationId;
-(void)setApplicationId:(NSString *)arg1 ;
-(void)setDateIsAllDay:(NSNumber *)arg1 ;
-(NSString *)notificationId;
-(void)setNotificationId:(NSString *)arg1 ;
-(void)setPreviewRestricted:(NSNumber *)arg1 ;
-(void)setRecencyDate:(NSDate *)arg1 ;
@end

