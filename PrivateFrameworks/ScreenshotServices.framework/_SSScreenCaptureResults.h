/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, NSString;

@interface _SSScreenCaptureResults : NSObject {

	UIImage* _image;
	NSString* _failureReasonIfImageIsNil;

}

@property (nonatomic,retain) UIImage * image;                                 //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * failureReasonIfImageIsNil;              //@synthesize failureReasonIfImageIsNil=_failureReasonIfImageIsNil - In the implementation block
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setFailureReasonIfImageIsNil:(NSString *)arg1 ;
-(NSString *)failureReasonIfImageIsNil;
@end

