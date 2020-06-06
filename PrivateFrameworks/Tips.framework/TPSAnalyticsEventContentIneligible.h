/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Tips.framework/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tips/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventContentIneligible : TPSAnalyticsEvent {

	NSString* _contentID;
	NSString* _bundleID;
	NSString* _context;
	unsigned long long _displayType;
	long long _reason;

}

@property (nonatomic,readonly) NSString * contentID;                        //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                         //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSString * context;                          //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) unsigned long long displayType;              //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,readonly) long long reason;                            //@synthesize reason=_reason - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)reason;
-(NSString *)context;
-(NSString *)bundleID;
-(id)eventName;
-(unsigned long long)displayType;
-(NSString *)contentID;
-(id)analyticsEventRepresentation;
-(id)initWithContentID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 displayType:(unsigned long long)arg4 reason:(long long)arg5 date:(id)arg6 ;
-(id)duetEvent;
@end

