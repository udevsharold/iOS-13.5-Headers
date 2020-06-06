/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestionsBaseFilter.h>
#import <MapsSuggestions/MapsSuggestionsFilter.h>

@class NSString;

@interface MapsSuggestionsBlockFilter : MapsSuggestionsBaseFilter <MapsSuggestionsFilter> {

	NSString* _name;
	/*^block*/id _block;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
+(id)filterWithBlock:(/*^block*/id)arg1 ;
+(BOOL)isEnabled;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(NSString *)uniqueName;
-(BOOL)shouldKeepEntry:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 name:(id)arg2 ;
@end

