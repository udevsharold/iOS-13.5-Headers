/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <AVFoundation/AVPlayerItem.h>

@class AltClipCollection, OrientationInfo;

@interface VEKPlayerItem : AVPlayerItem {

	AltClipCollection* _altInfo;
	OrientationInfo* _currentAltInfo;
	CGSize _targetSize;

}

@property (nonatomic,retain) AltClipCollection * altInfo;                          //@synthesize altInfo=_altInfo - In the implementation block
@property (assign,nonatomic,__weak) OrientationInfo * currentAltInfo;              //@synthesize currentAltInfo=_currentAltInfo - In the implementation block
@property (assign,nonatomic) CGSize targetSize;                                    //@synthesize targetSize=_targetSize - In the implementation block
@property (nonatomic,readonly) BOOL isRotated; 
@property (nonatomic,readonly) double aspect; 
-(BOOL)isRotated;
-(CGSize)targetSize;
-(void)setTargetSize:(CGSize)arg1 ;
-(double)aspect;
-(AltClipCollection *)altInfo;
-(OrientationInfo *)currentAltInfo;
-(void)setCurrentAltInfo:(OrientationInfo *)arg1 ;
-(void)setAltInfo:(AltClipCollection *)arg1 ;
@end

