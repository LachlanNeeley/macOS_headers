//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNContactLikenessesFetchStrategyFactory.h"

@class CNContactStore, CNUIMeContactMonitor, CNUIPRLikenessResolver, PRPersonaStore;

@interface CNContactLikenessesFetchStrategyDefaultFactory : NSObject <CNContactLikenessesFetchStrategyFactory>
{
    CNContactStore *_contactStore;
    CNUIMeContactMonitor *_meContactMonitor;
    PRPersonaStore *_personaStore;
    CNUIPRLikenessResolver *_likenessResolver;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CNUIPRLikenessResolver *likenessResolver; // @synthesize likenessResolver=_likenessResolver;
@property(retain, nonatomic) PRPersonaStore *personaStore; // @synthesize personaStore=_personaStore;
@property(retain, nonatomic) CNUIMeContactMonitor *meContactMonitor; // @synthesize meContactMonitor=_meContactMonitor;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (id)strategyForContact:(id)arg1;
- (id)initWithMeContactMonitor:(id)arg1 personaStore:(id)arg2 likenessResolver:(id)arg3 contactStore:(id)arg4;

@end

