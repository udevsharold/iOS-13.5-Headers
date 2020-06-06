/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, DOCDocumentSource, NSString, DOCSourceSearchingContext;

@interface PSDocumentsPolicyController : PSListController {

	BOOL _isFirstSourceResults;
	PSSpecifier* _groupSpecifier;
	DOCDocumentSource* _selectedDocumentSource;
	NSString* _bundleIdentifier;
	DOCSourceSearchingContext* _searchingContext;

}

@property (nonatomic,retain) PSSpecifier * groupSpecifier;                              //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (nonatomic,retain) DOCDocumentSource * selectedDocumentSource;                //@synthesize selectedDocumentSource=_selectedDocumentSource - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) DOCSourceSearchingContext * searchingContext;              //@synthesize searchingContext=_searchingContext - In the implementation block
@property (assign,nonatomic) BOOL isFirstSourceResults;                                 //@synthesize isFirstSourceResults=_isFirstSourceResults - In the implementation block
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(PSSpecifier *)groupSpecifier;
-(DOCSourceSearchingContext *)searchingContext;
-(id)documentSource;
-(void)setSelectedDocumentSource:(DOCDocumentSource *)arg1 ;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(BOOL)isFirstSourceResults;
-(void)setIsFirstSourceResults:(BOOL)arg1 ;
-(void)updateRadioGroupWithSources:(id)arg1 animated:(BOOL)arg2 ;
-(void)setSearchingContext:(DOCSourceSearchingContext *)arg1 ;
-(DOCDocumentSource *)selectedDocumentSource;
-(void)updateFooterAnimated:(BOOL)arg1 ;
-(void)setDocumentSource:(id)arg1 ;
@end

