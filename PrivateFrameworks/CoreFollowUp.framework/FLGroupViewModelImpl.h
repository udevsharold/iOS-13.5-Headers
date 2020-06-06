/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FLGroupViewModel.h>

@class NSMutableArray, NSString;

@interface FLGroupViewModelImpl : NSObject <FLGroupViewModel> {

	NSMutableArray* _mutableItems;
	NSString* _identifier;
	NSString* _rowTitle;
	NSString* _groupTitle;

}

@property (nonatomic,copy) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * rowTitle;                     //@synthesize rowTitle=_rowTitle - In the implementation block
@property (nonatomic,copy) NSString * groupTitle;                   //@synthesize groupTitle=_groupTitle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)items;
-(void)addItem:(id)arg1 ;
-(void)setGroupTitle:(NSString *)arg1 ;
-(NSString *)groupTitle;
-(void)setRowTitle:(NSString *)arg1 ;
-(BOOL)shouldCoalesceItems;
-(NSString *)rowTitle;
-(BOOL)restrictionEnabled;
@end

