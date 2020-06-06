/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:33 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/ICNoteBaseActivityItemSource.h>
#import <UIKit/UIActivityItemSource.h>

@class NSAttributedString, NSString;

@interface ICNoteStringActivityItemSource : ICNoteBaseActivityItemSource <UIActivityItemSource> {

	/*^block*/id _attributedStringCreator;
	NSAttributedString* _attributedString;

}

@property (nonatomic,copy) id attributedStringCreator;                         //@synthesize attributedStringCreator=_attributedStringCreator - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedString;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(id)initWithTitle:(id)arg1 attributedStringCreator:(/*^block*/id)arg2 ;
-(void)setAttributedStringCreator:(id)arg1 ;
-(id)attributedStringCreator;
-(BOOL)allowsAttributedStringForActivityType:(id)arg1 ;
@end

