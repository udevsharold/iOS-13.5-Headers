/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableArray, NSString;

@interface SKUILocalizedStringDictionary : NSObject {

	NSArray* _bundles;
	NSMutableArray* _stringTables;
	NSString* _localeName;

}

@property (nonatomic,readonly) NSString * localeName;              //@synthesize localeName=_localeName - In the implementation block
-(id)localizedStringForKey:(id)arg1 ;
-(id)localizedStringForKey:(id)arg1 inTable:(id)arg2 ;
-(id)_stringTableForBundle:(id)arg1 tableName:(id)arg2 ;
-(id)initWithLocaleName:(id)arg1 bundles:(id)arg2 ;
-(NSString *)localeName;
@end

