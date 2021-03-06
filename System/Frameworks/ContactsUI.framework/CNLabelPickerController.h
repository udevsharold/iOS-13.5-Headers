/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPickerController.h>

@class CNPropertyGroupItem, NSMutableArray;

@interface CNLabelPickerController : CNPickerController {

	CNPropertyGroupItem* _item;
	NSMutableArray* _labelsToDeleteOnCommit;

}

@property (retain) NSMutableArray * labelsToDeleteOnCommit;                    //@synthesize labelsToDeleteOnCommit=_labelsToDeleteOnCommit - In the implementation block
@property (nonatomic,__weak,readonly) CNPropertyGroupItem * item;              //@synthesize item=_item - In the implementation block
-(CNPropertyGroupItem *)item;
-(id)titleForPickerItem:(id)arg1 ;
-(id)initForPropertyItem:(id)arg1 ;
-(void)removeCustomItem:(id)arg1 ;
-(void)pickedItem:(id)arg1 ;
-(NSMutableArray *)labelsToDeleteOnCommit;
-(void)setLabelsToDeleteOnCommit:(NSMutableArray *)arg1 ;
@end

