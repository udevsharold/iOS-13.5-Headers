/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CRImage, NSArray, NSDictionary;

@interface CRActivationMap : NSObject {

	CRImage* _cutImage;
	NSArray* _activations;
	NSDictionary* _codeMap;
	NSArray* _codeMapIndex;

}

@property (retain) CRImage * cutImage;                  //@synthesize cutImage=_cutImage - In the implementation block
@property (retain) NSArray * activations;               //@synthesize activations=_activations - In the implementation block
@property (retain) NSDictionary * codeMap;              //@synthesize codeMap=_codeMap - In the implementation block
@property (retain) NSArray * codeMapIndex;              //@synthesize codeMapIndex=_codeMapIndex - In the implementation block
-(NSArray *)activations;
-(NSDictionary *)codeMap;
-(void)setCodeMap:(NSDictionary *)arg1 ;
-(void)setActivations:(NSArray *)arg1 ;
-(void)setCutImage:(CRImage *)arg1 ;
-(void)setCodeMapIndex:(NSArray *)arg1 ;
-(id)initWithActivation:(id)arg1 codeMapIndex:(id)arg2 codeMap:(int*)arg3 codeMapSize:(int)arg4 blankIndex:(unsigned short)arg5 cutImage:(id)arg6 ;
-(CRImage *)cutImage;
-(NSArray *)codeMapIndex;
@end

