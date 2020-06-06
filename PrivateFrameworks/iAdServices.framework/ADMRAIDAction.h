/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAdServices/iAdServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSDictionary;

@interface ADMRAIDAction : NSObject <NSSecureCoding, NSCopying> {

	long long _type;
	NSURL* _url;
	double _maximumExpandWidth;
	double _maximumExpandHeight;
	NSDictionary* _calendarEventInfo;

}

@property (assign,nonatomic) long long type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSURL * url;                                     //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) double maximumExpandWidth;                     //@synthesize maximumExpandWidth=_maximumExpandWidth - In the implementation block
@property (assign,nonatomic) double maximumExpandHeight;                    //@synthesize maximumExpandHeight=_maximumExpandHeight - In the implementation block
@property (nonatomic,readonly) BOOL opensNewsLink; 
@property (nonatomic,retain) NSDictionary * calendarEventInfo;              //@synthesize calendarEventInfo=_calendarEventInfo - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)doesURLOpenNews:(id)arg1 ;
+(id)errorDescriptionForActionType:(long long)arg1 errorType:(long long)arg2 ;
+(id)descriptionForActionType:(long long)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(BOOL)opensNewsLink;
-(NSDictionary *)calendarEventInfo;
-(void)setCalendarEventInfo:(NSDictionary *)arg1 ;
-(void)setMaximumExpandWidth:(double)arg1 ;
-(void)setMaximumExpandHeight:(double)arg1 ;
-(double)maximumExpandWidth;
-(double)maximumExpandHeight;
@end

