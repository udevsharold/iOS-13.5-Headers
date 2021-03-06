/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, NSString;

@interface _MKPlaceAttributionLabel : NSObject {

	UIImage* image;
	double textBaselineOffset;
	double imageBaselineOffset;
	NSString* imagePlaceholder;

}

@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) double textBaselineOffset; 
@property (assign,nonatomic) double imageBaselineOffset; 
@property (nonatomic,retain) NSString * imagePlaceholder; 
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)imagePlaceholder;
-(double)textBaselineOffset;
-(double)imageBaselineOffset;
-(id)attributionWithString:(id)arg1 ;
-(void)setTextBaselineOffset:(double)arg1 ;
-(void)setImageBaselineOffset:(double)arg1 ;
-(void)setImagePlaceholder:(NSString *)arg1 ;
@end

