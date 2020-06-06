/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VCVideoRule : NSObject {

	int _width;
	int _height;
	float _frameRate;
	float _priority;
	int _payload;

}

@property (nonatomic,readonly) int iWidth;                          //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) int iHeight;                         //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) float fRate;                         //@synthesize frameRate=_frameRate - In the implementation block
@property (nonatomic,readonly) int iPayload;                        //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) NSString * description; 
@property (assign,nonatomic) float fPref;                           //@synthesize priority=_priority - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(long long)compare:(id)arg1 ;
-(id)initWithFrameWidth:(int)arg1 frameHeight:(int)arg2 frameRate:(float)arg3 ;
-(id)initWithFrameWidth:(int)arg1 frameHeight:(int)arg2 frameRate:(float)arg3 payload:(int)arg4 priority:(float)arg5 ;
-(int)iWidth;
-(int)iHeight;
-(float)fRate;
-(int)iPayload;
-(float)fPref;
-(void)setFrameWidth:(int)arg1 frameHeight:(int)arg2 frameRate:(float)arg3 ;
-(id)initWithFrameWidth:(int)arg1 frameHeight:(int)arg2 frameRate:(float)arg3 payload:(int)arg4 ;
-(long long)compareByPref:(id)arg1 ;
-(void)setToVideoRule:(id)arg1 ;
-(void)setFPref:(float)arg1 ;
@end

