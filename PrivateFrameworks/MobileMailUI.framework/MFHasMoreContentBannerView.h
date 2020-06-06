/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMailUI/MobileMailUI-Structs.h>
#import <MobileMailUI/MFSuggestionBannerView.h>

@protocol MFHasMoreContentBannerViewDelegate;
@class NSString;

@interface MFHasMoreContentBannerView : MFSuggestionBannerView {

	id<MFHasMoreContentBannerViewDelegate> _delegate;

}

@property (readonly) NSString * titleString; 
@property (assign,nonatomic,__weak) id<MFHasMoreContentBannerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)bannerWithFrame:(CGRect)arg1 isPlainText:(BOOL)arg2 remainingBytes:(unsigned long long)arg3 ;
-(id<MFHasMoreContentBannerViewDelegate>)delegate;
-(void)setDelegate:(id<MFHasMoreContentBannerViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)reloadData;
-(NSString *)titleString;
-(void)_titleControlTapped:(id)arg1 ;
-(id)actionStringIsDownloading:(BOOL)arg1 ;
-(void)requestLoad;
@end

