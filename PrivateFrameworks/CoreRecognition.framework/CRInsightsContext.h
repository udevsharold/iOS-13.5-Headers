/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, CRCameraReader;

@interface CRInsightsContext : NSObject {

	NSMutableDictionary* _info;
	CRCameraReader* _cameraReader;

}

@property (nonatomic,retain) NSMutableDictionary * info;                        //@synthesize info=_info - In the implementation block
@property (assign,nonatomic,__weak) CRCameraReader * cameraReader;              //@synthesize cameraReader=_cameraReader - In the implementation block
-(id)init;
-(id)description;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(NSMutableDictionary *)info;
-(id)initWithContext:(id)arg1 ;
-(void)setInfo:(NSMutableDictionary *)arg1 ;
-(CRCameraReader *)cameraReader;
-(void)setCameraReader:(CRCameraReader *)arg1 ;
@end

