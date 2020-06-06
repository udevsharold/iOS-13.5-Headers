/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>
#import <libobjc.A.dylib/_SKUIMenuBarViewElementConfigurationReloadDelegate.h>
#import <libobjc.A.dylib/SKUIMenuBarViewElement.h>
@class SKUIMenuBarViewElementConfiguration;


@protocol SKUIMenuBarViewElement <NSObject>
@property (nonatomic,retain) SKUIMenuBarViewElementConfiguration * configuration; 
@required
-(void)setConfiguration:(id)arg1;
-(SKUIMenuBarViewElementConfiguration *)configuration;

@end


@class SKUIMenuBarViewElementConfiguration, NSArray, NSString;

@interface SKUIMenuBarViewElement : SKUIViewElement <_SKUIMenuBarViewElementConfigurationReloadDelegate, SKUIMenuBarViewElement> {

	NSArray* _titleViewElements;
	SKUIMenuBarViewElementConfiguration* _configuration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIMenuBarViewElementConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(id)supportedFeatures;
+(Class)_titlesMenuBarViewElementClass;
+(Class)_shelfMenuBarViewElementClass;
-(void)setConfiguration:(SKUIMenuBarViewElementConfiguration *)arg1 ;
-(SKUIMenuBarViewElementConfiguration *)configuration;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)_menuBarViewElementConfigurationRequestsReload:(id)arg1 ;
-(id)titleForMenuItemAtIndex:(unsigned long long)arg1 ;
-(void)_reloadMenuItems;
@end

