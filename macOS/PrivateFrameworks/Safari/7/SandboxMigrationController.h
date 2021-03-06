//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ResourcePreferencesController, SandboxFileExtensionController;

__attribute__((visibility("hidden")))
@interface SandboxMigrationController : NSObject
{
    ResourcePreferencesController *_resourcePreferencesController;
    SandboxFileExtensionController *_fileExtensionController;
}

- (void).cxx_destruct;
- (BOOL)_hasPerformedOneTimeSandboxMigration;
- (void)_addMigratedExtensions:(id)arg1 migrationType:(unsigned long long)arg2;
- (void)performOneTimeSandboxResourceMigrationIfNecessary;
- (id)initWithResourcePreferencesController:(id)arg1 fileExtensionController:(id)arg2;

@end

