/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIClientContextPreviewContainer.h>

@protocol SKUIClientContextPreviewContainer <JSExport>
@required
-(void)previewDocument:(id)arg1 :(id)arg2;

@end


@class SKUIClientContext, SKUIPreviewContainerViewController;

@interface SKUIClientContextPreviewContainer : IKJSObject <SKUIClientContextPreviewContainer> {

	SKUIClientContext* _clientContext;
	SKUIPreviewContainerViewController* _previewContainerViewController;

}
-(id)initWithAppContext:(id)arg1 clientContext:(id)arg2 previewContainerViewController:(id)arg3 ;
-(void)previewDocument:(id)arg1 :(id)arg2 ;
@end

