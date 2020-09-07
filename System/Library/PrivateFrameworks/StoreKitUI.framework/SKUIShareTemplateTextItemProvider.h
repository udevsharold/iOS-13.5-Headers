/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivityItemProvider.h>

@class SKUIClientContext, SKUIShareTemplateViewElement;

@interface SKUIShareTemplateTextItemProvider : UIActivityItemProvider {

	SKUIClientContext* _clientContext;
	SKUIShareTemplateViewElement* _templateElement;

}
-(id)item;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)initWithTemplateElement:(id)arg1 clientContext:(id)arg2 ;
@end
