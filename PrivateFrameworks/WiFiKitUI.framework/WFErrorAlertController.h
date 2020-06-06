/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIAlertController.h>
#import <libobjc.A.dylib/WFNetworkView.h>

@protocol WFErrorProviderContext;
@interface WFErrorAlertController : UIAlertController <WFNetworkView> {

	id<WFErrorProviderContext> _context;

}

@property (nonatomic,retain) id<WFErrorProviderContext> context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL wantsModalPresentation; 
+(id)errorAlertControllerWithContext:(id)arg1 ;
-(id<WFErrorProviderContext>)context;
-(void)setContext:(id<WFErrorProviderContext>)arg1 ;
-(BOOL)_canShowWhileLocked;
@end

