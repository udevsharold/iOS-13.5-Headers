/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AVCaptureDeviceControlRequest : NSObject {

	/*^block*/id _completionBlock;
	int _requestID;
	int _errorCode;

}

@property (nonatomic,copy,readonly) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,readonly) int requestID;                        //@synthesize requestID=_requestID - In the implementation block
@property (assign,nonatomic) int errorCode;                          //@synthesize errorCode=_errorCode - In the implementation block
+(id)deviceControlRequestWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)completionBlock;
-(int)errorCode;
-(void)setErrorCode:(int)arg1 ;
-(int)requestID;
-(id)_initWithCompletionBlock:(/*^block*/id)arg1 ;
@end

