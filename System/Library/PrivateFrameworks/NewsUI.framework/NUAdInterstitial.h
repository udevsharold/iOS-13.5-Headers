/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ADInterstitialAdDelegate.h>

@class ADInterstitialAd, NSString;

@interface NUAdInterstitial : NSObject <ADInterstitialAdDelegate> {

	ADInterstitialAd* _interstitial;
	/*^block*/id _completionBlock;

}

@property (nonatomic,retain) ADInterstitialAd * interstitial;              //@synthesize interstitial=_interstitial - In the implementation block
@property (nonatomic,copy) id completionBlock;                             //@synthesize completionBlock=_completionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)interstitialAdDidUnload:(id)arg1 ;
-(void)interstitialAdDidLoad:(id)arg1 ;
-(void)interstitialAd:(id)arg1 didFailWithError:(id)arg2 ;
-(void)missedOpportunityToFill;
-(ADInterstitialAd *)interstitial;
-(id)initWithContext:(id)arg1 andCompletionBlock:(/*^block*/id)arg2 ;
-(void)setInterstitial:(ADInterstitialAd *)arg1 ;
@end
