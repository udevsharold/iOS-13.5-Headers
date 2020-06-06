/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFLoggingBackend.h>

@protocol OS_os_log;
@class NSObject, NSArray, NSDictionary, NSString;

@interface WFAggDLoggingBackend : NSObject <WFLoggingBackend> {

	NSObject*<OS_os_log> _log;
	NSArray* _prefixComponents;
	NSDictionary* _prefixKeyMapping;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)logEvent:(id)arg1 withProperties:(id)arg2 ;
@end

