/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestionsBaseDeduper.h>
#import <MapsSuggestions/MapsSuggestionsDeduper.h>

@class NSString;

@interface MapsSuggestionsBlockDeduper : MapsSuggestionsBaseDeduper <MapsSuggestionsDeduper> {

	/*^block*/id _block;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
+(BOOL)isEnabled;
+(id)deduperWithBlock:(/*^block*/id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(BOOL)dedupeByEnrichingEntry:(id)arg1 withEntry:(id)arg2 ;
@end

