/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CAMCaptureCoordinationInfo;

@interface CAMCaptureResponse : NSObject {

	unsigned short _sessionIdentifier;
	long long _type;
	CAMCaptureCoordinationInfo* _coordinationInfo;

}

@property (nonatomic,readonly) long long type;                                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned short sessionIdentifier;                           //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) CAMCaptureCoordinationInfo * coordinationInfo;              //@synthesize coordinationInfo=_coordinationInfo - In the implementation block
-(id)init;
-(long long)type;
-(unsigned short)sessionIdentifier;
-(CAMCaptureCoordinationInfo *)coordinationInfo;
-(id)initWithType:(long long)arg1 captureSession:(unsigned short)arg2 coordinationInfo:(id)arg3 ;
-(void)releaseCachedImages;
@end

