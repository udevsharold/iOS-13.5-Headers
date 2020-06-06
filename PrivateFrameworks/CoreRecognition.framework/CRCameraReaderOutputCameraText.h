/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRecognition/CoreRecognition-Structs.h>
#import <CoreRecognition/CRCameraReaderOutput.h>

@class NSAttributedString;

@interface CRCameraReaderOutputCameraText : CRCameraReaderOutput

@property (copy) NSAttributedString * overlayString; 
@property (readonly) CGRect boundingBox; 
@property (readonly) float rotation; 
-(CGRect)boundingBox;
-(float)rotation;
-(void)setRotation:(float)arg1 ;
-(void)setBoundingBox:(CGRect)arg1 ;
-(void)setOverlayString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)overlayString;
@end

