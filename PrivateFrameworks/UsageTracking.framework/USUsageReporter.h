/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UsageTracking.framework/UsageTracking
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface USUsageReporter : NSObject {

	NSXPCConnection* _xpcConnection;

}

@property (readonly) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)getLocalDeviceIdentifierAndReturnError:(id*)arg1 ;
+(void)synchronizeUsageWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)xpcConnection;
-(id)getLocalDeviceIdentifierAndReturnError:(id*)arg1 ;
-(void)fetchReportsDuringInterval:(id)arg1 partitionInterval:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchReportsDuringInterval:(id)arg1 partitionInterval:(double)arg2 forceImmediateSync:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

