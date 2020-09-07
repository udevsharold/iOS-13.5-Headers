/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureSinkConfiguration.h>

@interface FigCaptureStillImageSinkConfiguration : FigCaptureSinkConfiguration {

	BOOL _quadraHighResCaptureEnabled;

}

@property (assign,nonatomic) BOOL quadraHighResCaptureEnabled;              //@synthesize quadraHighResCaptureEnabled=_quadraHighResCaptureEnabled - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setQuadraHighResCaptureEnabled:(BOOL)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(int)sinkType;
-(BOOL)quadraHighResCaptureEnabled;
@end
