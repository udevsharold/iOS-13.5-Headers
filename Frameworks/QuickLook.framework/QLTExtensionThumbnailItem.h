/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol QLTExtensionThumbnailItem <NSObject>
@property (nonatomic,copy,readonly) NSString * contentType; 
@property (assign) BOOL needsAccessToExternalResources; 
@required
-(NSString *)contentType;
-(void)provideURLWrapper:(/*^block*/id)arg1;
-(BOOL)needsAccessToExternalResources;
-(void)setNeedsAccessToExternalResources:(BOOL)arg1;

@end
