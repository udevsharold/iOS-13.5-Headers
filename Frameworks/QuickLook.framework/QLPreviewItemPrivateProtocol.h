/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL, UIColor, NSDictionary;


@protocol QLPreviewItemPrivateProtocol <QLPreviewItem>
@property (nonatomic,readonly) NSString * previewItemContentType; 
@property (readonly) NSURL * previewItemURLForDisplay; 
@property (nonatomic,readonly) BOOL isPromisedItem; 
@property (readonly) double autoPlaybackPosition; 
@property (readonly) UIColor * backgroundColorOverride; 
@property (readonly) BOOL wantsDefaultMediaPlayer; 
@property (readonly) NSString * MIMEType; 
@property (nonatomic,copy) NSDictionary * previewOptions; 
@optional
-(NSString *)MIMEType;
-(NSString *)previewItemContentType;
-(NSURL *)previewItemURLForDisplay;
-(BOOL)isPromisedItem;
-(UIColor *)backgroundColorOverride;
-(NSDictionary *)previewOptions;
-(void)setPreviewOptions:(id)arg1;
-(BOOL)wantsDefaultMediaPlayer;
-(double)autoPlaybackPosition;

@end

