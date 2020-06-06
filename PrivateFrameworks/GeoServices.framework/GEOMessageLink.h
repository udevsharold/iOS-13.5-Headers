/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDMessageLink, NSTimeZone, NSString;

@interface GEOMessageLink : NSObject {

	GEOPDMessageLink* _messageLink;
	NSTimeZone* _timeZone;

}

@property (nonatomic,readonly) NSTimeZone * timeZone;                            //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,readonly) NSString * messageID; 
@property (nonatomic,readonly) NSString * messageURLString; 
@property (nonatomic,readonly) BOOL isVerified; 
@property (nonatomic,readonly) NSString * navBackgroundColorString; 
@property (nonatomic,readonly) NSString * navTintColorString; 
-(NSTimeZone *)timeZone;
-(NSString *)messageID;
-(int)responseTime;
-(BOOL)isVerified;
-(id)initWithMessageLink:(id)arg1 ;
-(NSString *)messageURLString;
-(NSString *)navBackgroundColorString;
-(NSString *)navTintColorString;
-(id)messageBusinessHours;
@end

