/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSArray;

@interface CNPhotoPickerTrapView : UIView {

	UILabel* _label;
	NSArray* _constraints;

}

@property (nonatomic,retain) UILabel * label;              //@synthesize label=_label - In the implementation block
@property (retain) NSArray * constraints;                  //@synthesize constraints=_constraints - In the implementation block
-(NSArray *)constraints;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
@end
