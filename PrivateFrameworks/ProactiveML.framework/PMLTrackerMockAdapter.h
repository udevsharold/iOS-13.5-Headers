/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PMLTrackerAdapterProtocol.h>

@class NSMutableArray, NSString;

@interface PMLTrackerMockAdapter : NSObject <PMLTrackerAdapterProtocol> {

	NSMutableArray* _trackedMessages;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)postMetricId:(unsigned)arg1 message:(id)arg2 ;
-(void)clearAllTrackedMessages;
-(id)trackedMessagesByClass:(Class)arg1 ;
@end

