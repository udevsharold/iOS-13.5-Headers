/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString, FMFSession, HMFTimer;

@interface HMDFMFRequest : HMFObject {

	NSString* _requestID;
	FMFSession* _fmfSession;
	HMFTimer* _fmfSessionResponseTimer;

}

@property (nonatomic,readonly) NSString * requestID;                            //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,readonly) FMFSession * fmfSession;                         //@synthesize fmfSession=_fmfSession - In the implementation block
@property (nonatomic,readonly) HMFTimer * fmfSessionResponseTimer;              //@synthesize fmfSessionResponseTimer=_fmfSessionResponseTimer - In the implementation block
-(id)description;
-(NSString *)requestID;
-(FMFSession *)fmfSession;
-(id)initWithResponseTimerDelegate:(id)arg1 ;
-(HMFTimer *)fmfSessionResponseTimer;
@end

