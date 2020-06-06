/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNMeCardSharingSectionDataSource.h>

@protocol CNMeCardSharingEnabledDelegate;
@class UISwitch, NSArray, NSString;

@interface CNMeCardSharingEnabledDataSource : NSObject <CNMeCardSharingSectionDataSource> {

	BOOL _sharingEnabled;
	id<CNMeCardSharingEnabledDelegate> _delegate;
	UISwitch* _enabledSwitch;
	NSArray* _items;

}

@property (nonatomic,retain) UISwitch * enabledSwitch;                                        //@synthesize enabledSwitch=_enabledSwitch - In the implementation block
@property (nonatomic,retain) NSArray * items;                                                 //@synthesize items=_items - In the implementation block
@property (assign,nonatomic,__weak) id<CNMeCardSharingEnabledDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL sharingEnabled;                                             //@synthesize sharingEnabled=_sharingEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long selectedIndex; 
-(id<CNMeCardSharingEnabledDelegate>)delegate;
-(void)setDelegate:(id<CNMeCardSharingEnabledDelegate>)arg1 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(unsigned long long)numberOfItems;
-(void)didSelectItemAtIndex:(unsigned long long)arg1 ;
-(BOOL)sharingEnabled;
-(void)setSharingEnabled:(BOOL)arg1 ;
-(void)buildItems;
-(BOOL)supportsSelection;
-(id)sectionHeaderLabel;
-(id)sectionFooterLabel;
-(id)itemForIndex:(unsigned long long)arg1 ;
-(id)initWithSharingEnabled:(BOOL)arg1 ;
-(void)didToggleEnabledSwitch:(id)arg1 ;
-(UISwitch *)enabledSwitch;
-(void)setEnabledSwitch:(UISwitch *)arg1 ;
@end

