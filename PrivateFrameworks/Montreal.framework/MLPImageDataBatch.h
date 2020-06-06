/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Montreal/MLPDataBatch.h>

@class NSArray;

@interface MLPImageDataBatch : MLPDataBatch {

	NSArray* _images;
	NSArray* _lossLabels;
	NSArray* _labels;

}

@property (retain) NSArray * images;                  //@synthesize images=_images - In the implementation block
@property (retain) NSArray * lossLabels;              //@synthesize lossLabels=_lossLabels - In the implementation block
@property (retain) NSArray * labels;                  //@synthesize labels=_labels - In the implementation block
-(NSArray *)images;
-(id)initWithDataBatch:(id)arg1 batchSize:(unsigned long long)arg2 network:(id)arg3 ;
-(NSArray *)labels;
-(void)setLabels:(NSArray *)arg1 ;
-(void)setImages:(NSArray *)arg1 ;
-(NSArray *)lossLabels;
-(void)setLossLabels:(NSArray *)arg1 ;
@end

