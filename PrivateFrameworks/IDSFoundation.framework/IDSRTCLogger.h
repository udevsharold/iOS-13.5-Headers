/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CUTMetricLogger.h>

@class NSString;

@interface IDSRTCLogger : NSObject <CUTMetricLogger> {

	unsigned short _category;

}

@property (nonatomic,readonly) unsigned short category;              //@synthesize category=_category - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loggerWithCategory:(unsigned short)arg1 ;
-(unsigned short)category;
-(void)logMetric:(id)arg1 ;
-(id)initWithCategory:(unsigned short)arg1 ;
@end

